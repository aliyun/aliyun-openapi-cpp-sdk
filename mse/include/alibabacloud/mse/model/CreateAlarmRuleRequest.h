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

#ifndef ALIBABACLOUD_MSE_MODEL_CREATEALARMRULEREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_CREATEALARMRULEREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT CreateAlarmRuleRequest : public RpcServiceRequest {
public:
	CreateAlarmRuleRequest();
	~CreateAlarmRuleRequest();
	int getNValue() const;
	void setNValue(int nValue);
	std::string getAlarmItem() const;
	void setAlarmItem(const std::string &alarmItem);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string get_Operator() const;
	void set_Operator(const std::string &_operator);
	std::string getAlarmAliasName() const;
	void setAlarmAliasName(const std::string &alarmAliasName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getContactGroupIds() const;
	void setContactGroupIds(const std::string &contactGroupIds);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getAlertWay() const;
	void setAlertWay(const std::string &alertWay);
	std::string getAggregates() const;
	void setAggregates(const std::string &aggregates);
	float getValue() const;
	void setValue(float value);

private:
	int nValue_;
	std::string alarmItem_;
	std::string clusterId_;
	std::string _operator_;
	std::string alarmAliasName_;
	std::string instanceId_;
	std::string contactGroupIds_;
	std::string acceptLanguage_;
	std::string alertWay_;
	std::string aggregates_;
	float value_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_CREATEALARMRULEREQUEST_H_
