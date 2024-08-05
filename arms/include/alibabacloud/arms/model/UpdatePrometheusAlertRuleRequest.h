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

#ifndef ALIBABACLOUD_ARMS_MODEL_UPDATEPROMETHEUSALERTRULEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_UPDATEPROMETHEUSALERTRULEREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT UpdatePrometheusAlertRuleRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	UpdatePrometheusAlertRuleRequest();
	~UpdatePrometheusAlertRuleRequest();
	std::string getExpression() const;
	void setExpression(const std::string &expression);
	std::string getAlertName() const;
	void setAlertName(const std::string &alertName);
	std::string getAnnotations() const;
	void setAnnotations(const std::string &annotations);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	long getDispatchRuleId() const;
	void setDispatchRuleId(long dispatchRuleId);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getMessage() const;
	void setMessage(const std::string &message);
	std::string getLabels() const;
	void setLabels(const std::string &labels);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getDuration() const;
	void setDuration(const std::string &duration);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getAlertId() const;
	void setAlertId(long alertId);
	std::string getNotifyType() const;
	void setNotifyType(const std::string &notifyType);

private:
	std::string expression_;
	std::string alertName_;
	std::string annotations_;
	std::string clusterId_;
	long dispatchRuleId_;
	std::string proxyUserId_;
	std::string type_;
	std::string message_;
	std::string labels_;
	std::vector<Tags> tags_;
	std::string duration_;
	std::string regionId_;
	long alertId_;
	std::string notifyType_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_UPDATEPROMETHEUSALERTRULEREQUEST_H_
