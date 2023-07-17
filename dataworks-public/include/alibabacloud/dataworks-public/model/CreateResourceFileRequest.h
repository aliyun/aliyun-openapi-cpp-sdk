/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATERESOURCEFILEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATERESOURCEFILEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateResourceFileRequest : public RpcServiceRequest {
public:
	CreateResourceFileRequest();
	~CreateResourceFileRequest();
	int getFileType() const;
	void setFileType(int fileType);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getResourceFile() const;
	void setResourceFile(const std::string &resourceFile);
	std::string getOriginResourceName() const;
	void setOriginResourceName(const std::string &originResourceName);
	long getProjectId() const;
	void setProjectId(long projectId);
	std::string getStorageURL() const;
	void setStorageURL(const std::string &storageURL);
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	bool getRegisterToCalcEngine() const;
	void setRegisterToCalcEngine(bool registerToCalcEngine);
	bool getUploadMode() const;
	void setUploadMode(bool uploadMode);
	std::string getFileName() const;
	void setFileName(const std::string &fileName);
	std::string getFileFolderPath() const;
	void setFileFolderPath(const std::string &fileFolderPath);
	std::string getFileDescription() const;
	void setFileDescription(const std::string &fileDescription);

private:
	int fileType_;
	std::string content_;
	std::string resourceFile_;
	std::string originResourceName_;
	long projectId_;
	std::string storageURL_;
	std::string owner_;
	bool registerToCalcEngine_;
	bool uploadMode_;
	std::string fileName_;
	std::string fileFolderPath_;
	std::string fileDescription_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATERESOURCEFILEREQUEST_H_
