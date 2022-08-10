import com.google.devtools.build.runfiles.Runfiles;
import com.google.devtools.build.runfiles.RunfilesHelper;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class Main {
  public static void main(String[] args) throws IOException {
    System.out.println("CURRENT_REPO_NAME='" + RunfilesHelper.CURRENT_REPO_NAME + "'");
    Runfiles runfiles = Runfiles.create();
    Path repoMapping = Path.of(runfiles.rlocation("_repo_mapping"));
    System.out.println("_repo_mapping --> " + repoMapping + ":");
    System.out.print(Files.readString(repoMapping));
  }
}
