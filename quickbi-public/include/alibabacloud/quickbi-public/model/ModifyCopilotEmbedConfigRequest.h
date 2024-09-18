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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_MODIFYCOPILOTEMBEDCONFIGREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_MODIFYCOPILOTEMBEDCONFIGREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT ModifyCopilotEmbedConfigRequest : public RpcServiceRequest {
public:
	ModifyCopilotEmbedConfigRequest();
	~ModifyCopilotEmbedConfigRequest();
	std::string getCopilotId() const;
	void setCopilotId(const std::string &copilotId);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	std::string getDataRange() const;
	void setDataRange(const std::string &dataRange);
	std::string getModuleName() const;
	void setModuleName(const std::string &moduleName);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	std::string getAgentName() const;
	void setAgentName(const std::string &agentName);

private:
	std::string copilotId_;
	std::string accessPoint_;
	std::string dataRange_;
	std::string moduleName_;
	std::string signType_;
	std::string agentName_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_MODIFYCOPILOTEMBEDCONFIGREQUEST_H_
