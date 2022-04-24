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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_SETCREDITLABELACTIONREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_SETCREDITLABELACTIONREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT SetCreditLabelActionRequest : public RpcServiceRequest {
public:
	SetCreditLabelActionRequest();
	~SetCreditLabelActionRequest();
	std::string getActionType() const;
	void setActionType(const std::string &actionType);
	std::string getIsNeedSaveNotifyRule() const;
	void setIsNeedSaveNotifyRule(const std::string &isNeedSaveNotifyRule);
	std::string getIsNeedAdjustCreditAccount() const;
	void setIsNeedAdjustCreditAccount(const std::string &isNeedAdjustCreditAccount);
	bool getNewCreateMode() const;
	void setNewCreateMode(bool newCreateMode);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getCurrencyCode() const;
	void setCurrencyCode(const std::string &currencyCode);
	std::string getDailyCycle() const;
	void setDailyCycle(const std::string &dailyCycle);
	std::string get_Operator() const;
	void set_Operator(const std::string &_operator);
	std::string getUid() const;
	void setUid(const std::string &uid);
	std::string getSiteCode() const;
	void setSiteCode(const std::string &siteCode);
	std::string getClearCycle() const;
	void setClearCycle(const std::string &clearCycle);
	bool getNeedNotice() const;
	void setNeedNotice(bool needNotice);
	std::string getRequestId() const;
	void setRequestId(const std::string &requestId);
	std::string getIsNeedSetCreditAmount() const;
	void setIsNeedSetCreditAmount(const std::string &isNeedSetCreditAmount);
	std::string getCreditAmount() const;
	void setCreditAmount(const std::string &creditAmount);
	std::string getIsNeedAddSettleLabel() const;
	void setIsNeedAddSettleLabel(const std::string &isNeedAddSettleLabel);

private:
	std::string actionType_;
	std::string isNeedSaveNotifyRule_;
	std::string isNeedAdjustCreditAccount_;
	bool newCreateMode_;
	std::string description_;
	std::string source_;
	std::string currencyCode_;
	std::string dailyCycle_;
	std::string _operator_;
	std::string uid_;
	std::string siteCode_;
	std::string clearCycle_;
	bool needNotice_;
	std::string requestId_;
	std::string isNeedSetCreditAmount_;
	std::string creditAmount_;
	std::string isNeedAddSettleLabel_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_SETCREDITLABELACTIONREQUEST_H_
