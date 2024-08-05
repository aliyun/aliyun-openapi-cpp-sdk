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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEALERTRULEREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEALERTRULEREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT CreateOrUpdateAlertRuleRequest : public RpcServiceRequest {
public:
	struct MarkTags {
		std::string value;
		std::string key;
	};
	struct Tags {
		std::string value;
		std::string key;
	};
	CreateOrUpdateAlertRuleRequest();
	~CreateOrUpdateAlertRuleRequest();
	long getAlertGroup() const;
	void setAlertGroup(long alertGroup);
	std::string getAlertName() const;
	void setAlertName(const std::string &alertName);
	std::string getAlertStatus() const;
	void setAlertStatus(const std::string &alertStatus);
	std::string getAnnotations() const;
	void setAnnotations(const std::string &annotations);
	std::string getDataConfig() const;
	void setDataConfig(const std::string &dataConfig);
	long getDuration() const;
	void setDuration(long duration);
	std::string getAutoAddTargetConfig() const;
	void setAutoAddTargetConfig(const std::string &autoAddTargetConfig);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getMetricsKey() const;
	void setMetricsKey(const std::string &metricsKey);
	std::string getAlertPiplines() const;
	void setAlertPiplines(const std::string &alertPiplines);
	std::vector<MarkTags> getMarkTags() const;
	void setMarkTags(const std::vector<MarkTags> &markTags);
	std::string getNotice() const;
	void setNotice(const std::string &notice);
	std::string getAlertRuleContent() const;
	void setAlertRuleContent(const std::string &alertRuleContent);
	std::string getPromQL() const;
	void setPromQL(const std::string &promQL);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	bool getAutoAddNewApplication() const;
	void setAutoAddNewApplication(bool autoAddNewApplication);
	std::string getFilters() const;
	void setFilters(const std::string &filters);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getMessage() const;
	void setMessage(const std::string &message);
	std::string getDurationCompareType() const;
	void setDurationCompareType(const std::string &durationCompareType);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getNotifyStrategy() const;
	void setNotifyStrategy(const std::string &notifyStrategy);
	std::string getLabels() const;
	void setLabels(const std::string &labels);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getNotifyMode() const;
	void setNotifyMode(const std::string &notifyMode);
	std::string getAlertType() const;
	void setAlertType(const std::string &alertType);
	std::string getAlertCheckType() const;
	void setAlertCheckType(const std::string &alertCheckType);
	std::string getMetricsType() const;
	void setMetricsType(const std::string &metricsType);
	long getAlertId() const;
	void setAlertId(long alertId);
	std::string getPids() const;
	void setPids(const std::string &pids);

private:
	long alertGroup_;
	std::string alertName_;
	std::string alertStatus_;
	std::string annotations_;
	std::string dataConfig_;
	long duration_;
	std::string autoAddTargetConfig_;
	std::string regionId_;
	std::string metricsKey_;
	std::string alertPiplines_;
	std::vector<MarkTags> markTags_;
	std::string notice_;
	std::string alertRuleContent_;
	std::string promQL_;
	std::string product_;
	std::string level_;
	bool autoAddNewApplication_;
	std::string filters_;
	std::string clusterId_;
	std::string message_;
	std::string durationCompareType_;
	std::string proxyUserId_;
	std::string notifyStrategy_;
	std::string labels_;
	std::vector<Tags> tags_;
	std::string notifyMode_;
	std::string alertType_;
	std::string alertCheckType_;
	std::string metricsType_;
	long alertId_;
	std::string pids_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEALERTRULEREQUEST_H_
