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

#ifndef ALIBABACLOUD_LIVE_MODEL_DYNAMICUPDATEWATERMARKSTREAMRULEREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DYNAMICUPDATEWATERMARKSTREAMRULEREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DynamicUpdateWaterMarkStreamRuleRequest : public RpcServiceRequest {
public:
	DynamicUpdateWaterMarkStreamRuleRequest();
	~DynamicUpdateWaterMarkStreamRuleRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getStream() const;
	void setStream(const std::string &stream);
	std::string getApp() const;
	void setApp(const std::string &app);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getDomain() const;
	void setDomain(const std::string &domain);

private:
	std::string regionId_;
	std::string stream_;
	std::string app_;
	long ownerId_;
	std::string templateId_;
	std::string domain_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DYNAMICUPDATEWATERMARKSTREAMRULEREQUEST_H_
