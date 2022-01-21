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

#ifndef ALIBABACLOUD_CMS_MODEL_APPLYMETRICRULETEMPLATEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_APPLYMETRICRULETEMPLATEREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT ApplyMetricRuleTemplateRequest : public RpcServiceRequest {
public:
	ApplyMetricRuleTemplateRequest();
	~ApplyMetricRuleTemplateRequest();
	std::string getApplyMode() const;
	void setApplyMode(const std::string &applyMode);
	std::string getWebhook() const;
	void setWebhook(const std::string &webhook);
	std::string getTemplateIds() const;
	void setTemplateIds(const std::string &templateIds);
	long getEnableEndTime() const;
	void setEnableEndTime(long enableEndTime);
	long getGroupId() const;
	void setGroupId(long groupId);
	long getNotifyLevel() const;
	void setNotifyLevel(long notifyLevel);
	long getEnableStartTime() const;
	void setEnableStartTime(long enableStartTime);
	long getSilenceTime() const;
	void setSilenceTime(long silenceTime);

private:
	std::string applyMode_;
	std::string webhook_;
	std::string templateIds_;
	long enableEndTime_;
	long groupId_;
	long notifyLevel_;
	long enableStartTime_;
	long silenceTime_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_APPLYMETRICRULETEMPLATEREQUEST_H_
