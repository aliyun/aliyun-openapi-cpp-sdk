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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_MODIFYAIPROEMBEDCONFIGREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_MODIFYAIPROEMBEDCONFIGREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT ModifyAiproEmbedConfigRequest : public RpcServiceRequest {
public:
	ModifyAiproEmbedConfigRequest();
	~ModifyAiproEmbedConfigRequest();
	int getUploadEnabled() const;
	void setUploadEnabled(int uploadEnabled);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	std::string getShowName() const;
	void setShowName(const std::string &showName);
	std::string getAiProId() const;
	void setAiProId(const std::string &aiProId);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	int getChatHistoryStatus() const;
	void setChatHistoryStatus(int chatHistoryStatus);
	int getMemoryEnabled() const;
	void setMemoryEnabled(int memoryEnabled);
	std::string getAgentName() const;
	void setAgentName(const std::string &agentName);
	std::string getConfig() const;
	void setConfig(const std::string &config);

private:
	int uploadEnabled_;
	std::string accessPoint_;
	std::string showName_;
	std::string aiProId_;
	std::string signType_;
	int chatHistoryStatus_;
	int memoryEnabled_;
	std::string agentName_;
	std::string config_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_MODIFYAIPROEMBEDCONFIGREQUEST_H_
