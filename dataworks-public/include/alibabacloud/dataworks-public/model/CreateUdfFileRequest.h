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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEUDFFILEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEUDFFILEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateUdfFileRequest : public RpcServiceRequest {
public:
	CreateUdfFileRequest();
	~CreateUdfFileRequest();
	bool getCreateFolderIfNotExists() const;
	void setCreateFolderIfNotExists(bool createFolderIfNotExists);
	std::string getReturnValue() const;
	void setReturnValue(const std::string &returnValue);
	std::string getResources() const;
	void setResources(const std::string &resources);
	std::string getFunctionType() const;
	void setFunctionType(const std::string &functionType);
	std::string getCmdDescription() const;
	void setCmdDescription(const std::string &cmdDescription);
	std::string getUdfDescription() const;
	void setUdfDescription(const std::string &udfDescription);
	std::string getParameterDescription() const;
	void setParameterDescription(const std::string &parameterDescription);
	std::string getProjectIdentifier() const;
	void setProjectIdentifier(const std::string &projectIdentifier);
	std::string getExample() const;
	void setExample(const std::string &example);
	std::string getFileName() const;
	void setFileName(const std::string &fileName);
	std::string getClassName() const;
	void setClassName(const std::string &className);
	std::string getFileFolderPath() const;
	void setFileFolderPath(const std::string &fileFolderPath);
	long getProjectId() const;
	void setProjectId(long projectId);

private:
	bool createFolderIfNotExists_;
	std::string returnValue_;
	std::string resources_;
	std::string functionType_;
	std::string cmdDescription_;
	std::string udfDescription_;
	std::string parameterDescription_;
	std::string projectIdentifier_;
	std::string example_;
	std::string fileName_;
	std::string className_;
	std::string fileFolderPath_;
	long projectId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEUDFFILEREQUEST_H_
