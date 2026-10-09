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

#ifndef ALIBABACLOUD_AIREGISTRY_MODEL_UPLOADSKILLVIAOSSREQUEST_H_
#define ALIBABACLOUD_AIREGISTRY_MODEL_UPLOADSKILLVIAOSSREQUEST_H_

#include <alibabacloud/airegistry/AIRegistryExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIRegistry {
namespace Model {
class ALIBABACLOUD_AIREGISTRY_EXPORT UploadSkillViaOssRequest : public RpcServiceRequest {
public:
	UploadSkillViaOssRequest();
	~UploadSkillViaOssRequest();
	std::string getNamespaceId() const;
	void setNamespaceId(const std::string &namespaceId);
	bool getOverwrite() const;
	void setOverwrite(bool overwrite);
	std::string getTargetVersion() const;
	void setTargetVersion(const std::string &targetVersion);
	std::string getOssObjectName() const;
	void setOssObjectName(const std::string &ossObjectName);
	std::string getCommitMsg() const;
	void setCommitMsg(const std::string &commitMsg);

private:
	std::string namespaceId_;
	bool overwrite_;
	std::string targetVersion_;
	std::string ossObjectName_;
	std::string commitMsg_;
};
} // namespace Model
} // namespace AIRegistry
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIREGISTRY_MODEL_UPLOADSKILLVIAOSSREQUEST_H_
