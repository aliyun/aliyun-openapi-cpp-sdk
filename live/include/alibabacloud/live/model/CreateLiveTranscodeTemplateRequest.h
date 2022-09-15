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

#ifndef ALIBABACLOUD_LIVE_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT CreateLiveTranscodeTemplateRequest : public RpcServiceRequest {
public:
	CreateLiveTranscodeTemplateRequest();
	~CreateLiveTranscodeTemplateRequest();
	std::string getType() const;
	void setType(const std::string &type);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getTemplateConfig() const;
	void setTemplateConfig(const std::string &templateConfig);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string type_;
	std::string securityToken_;
	std::string templateConfig_;
	long ownerId_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_CREATELIVETRANSCODETEMPLATEREQUEST_H_
