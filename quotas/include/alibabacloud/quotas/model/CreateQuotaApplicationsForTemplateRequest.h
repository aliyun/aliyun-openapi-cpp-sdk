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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_CREATEQUOTAAPPLICATIONSFORTEMPLATEREQUEST_H_
#define ALIBABACLOUD_QUOTAS_MODEL_CREATEQUOTAAPPLICATIONSFORTEMPLATEREQUEST_H_

#include <alibabacloud/quotas/QuotasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quotas {
namespace Model {
class ALIBABACLOUD_QUOTAS_EXPORT CreateQuotaApplicationsForTemplateRequest : public RpcServiceRequest {
public:
	struct Dimensions {
		std::string key;
		std::string value;
	};
	CreateQuotaApplicationsForTemplateRequest();
	~CreateQuotaApplicationsForTemplateRequest();
	std::string getReason() const;
	void setReason(const std::string &reason);
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getQuotaActionCode() const;
	void setQuotaActionCode(const std::string &quotaActionCode);
	double getDesireValue() const;
	void setDesireValue(double desireValue);
	std::string getEffectiveTime() const;
	void setEffectiveTime(const std::string &effectiveTime);
	std::vector<std::string> getAliyunUids() const;
	void setAliyunUids(const std::vector<std::string> &aliyunUids);
	std::string getQuotaCategory() const;
	void setQuotaCategory(const std::string &quotaCategory);
	std::string getOriginalContext() const;
	void setOriginalContext(const std::string &originalContext);
	std::string getExpireTime() const;
	void setExpireTime(const std::string &expireTime);
	std::string getEnvLanguage() const;
	void setEnvLanguage(const std::string &envLanguage);
	int getNoticeType() const;
	void setNoticeType(int noticeType);
	std::vector<Dimensions> getDimensions() const;
	void setDimensions(const std::vector<Dimensions> &dimensions);

private:
	std::string reason_;
	std::string productCode_;
	std::string quotaActionCode_;
	double desireValue_;
	std::string effectiveTime_;
	std::vector<std::string> aliyunUids_;
	std::string quotaCategory_;
	std::string originalContext_;
	std::string expireTime_;
	std::string envLanguage_;
	int noticeType_;
	std::vector<Dimensions> dimensions_;
};
} // namespace Model
} // namespace Quotas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUOTAS_MODEL_CREATEQUOTAAPPLICATIONSFORTEMPLATEREQUEST_H_
