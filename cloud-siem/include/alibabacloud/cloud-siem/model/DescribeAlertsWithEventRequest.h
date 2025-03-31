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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEALERTSWITHEVENTREQUEST_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEALERTSWITHEVENTREQUEST_H_

#include <alibabacloud/cloud-siem/Cloud_siemExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloud_siem {
namespace Model {
class ALIBABACLOUD_CLOUD_SIEM_EXPORT DescribeAlertsWithEventRequest : public RpcServiceRequest {
public:
	DescribeAlertsWithEventRequest();
	~DescribeAlertsWithEventRequest();
	long getRoleFor() const;
	void setRoleFor(long roleFor);
	std::string getAlertName() const;
	void setAlertName(const std::string &alertName);
	std::string getEntityName() const;
	void setEntityName(const std::string &entityName);
	std::string getAssetName() const;
	void setAssetName(const std::string &assetName);
	std::string getEntityId() const;
	void setEntityId(const std::string &entityId);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getIsDefend() const;
	void setIsDefend(const std::string &isDefend);
	long getStartTime() const;
	void setStartTime(long startTime);
	long getSubUserId() const;
	void setSubUserId(long subUserId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getRoleType() const;
	void setRoleType(int roleType);
	std::vector<std::string> getLevel() const;
	void setLevel(const std::vector<std::string> &level);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getAlertTitle() const;
	void setAlertTitle(const std::string &alertTitle);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getAlertType() const;
	void setAlertType(const std::string &alertType);
	std::string getAssetId() const;
	void setAssetId(const std::string &assetId);
	std::string getIncidentUuid() const;
	void setIncidentUuid(const std::string &incidentUuid);

private:
	long roleFor_;
	std::string alertName_;
	std::string entityName_;
	std::string assetName_;
	std::string entityId_;
	std::string source_;
	std::string isDefend_;
	long startTime_;
	long subUserId_;
	std::string regionId_;
	int pageSize_;
	int roleType_;
	std::vector<std::string> level_;
	long endTime_;
	std::string alertTitle_;
	int currentPage_;
	std::string alertType_;
	std::string assetId_;
	std::string incidentUuid_;
};
} // namespace Model
} // namespace Cloud_siem
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEALERTSWITHEVENTREQUEST_H_
