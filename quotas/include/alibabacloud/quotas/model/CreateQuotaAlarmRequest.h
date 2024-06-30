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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_CREATEQUOTAALARMREQUEST_H_
#define ALIBABACLOUD_QUOTAS_MODEL_CREATEQUOTAALARMREQUEST_H_

#include <alibabacloud/quotas/QuotasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quotas {
namespace Model {
class ALIBABACLOUD_QUOTAS_EXPORT CreateQuotaAlarmRequest : public RpcServiceRequest {
public:
	struct QuotaDimensions {
		std::string key;
		std::string value;
	};
	CreateQuotaAlarmRequest();
	~CreateQuotaAlarmRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getWebHook() const;
	void setWebHook(const std::string &webHook);
	float getThreshold() const;
	void setThreshold(float threshold);
	std::string getQuotaActionCode() const;
	void setQuotaActionCode(const std::string &quotaActionCode);
	std::string getThresholdType() const;
	void setThresholdType(const std::string &thresholdType);
	std::vector<QuotaDimensions> getQuotaDimensions() const;
	void setQuotaDimensions(const std::vector<QuotaDimensions> &quotaDimensions);
	std::string getOriginalContext() const;
	void setOriginalContext(const std::string &originalContext);
	float getThresholdPercent() const;
	void setThresholdPercent(float thresholdPercent);
	std::string getAlarmName() const;
	void setAlarmName(const std::string &alarmName);

private:
	std::string productCode_;
	std::string webHook_;
	float threshold_;
	std::string quotaActionCode_;
	std::string thresholdType_;
	std::vector<QuotaDimensions> quotaDimensions_;
	std::string originalContext_;
	float thresholdPercent_;
	std::string alarmName_;
};
} // namespace Model
} // namespace Quotas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUOTAS_MODEL_CREATEQUOTAALARMREQUEST_H_
