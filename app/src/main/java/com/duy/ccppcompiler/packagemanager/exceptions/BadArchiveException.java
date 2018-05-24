package com.duy.ccppcompiler.packagemanager.exceptions;

import java.io.IOException;

public class BadArchiveException extends IOException {
    private final String fileName;

    public BadArchiveException(String fileName) {
        this.fileName = fileName;
    }

    public String getFileName() {
        return fileName;
    }
}
