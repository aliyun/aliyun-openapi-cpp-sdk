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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEALERTSREQUEST_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEALERTSREQUEST_H_

#include <alibabacloud/cloud-siem/Cloud_siemExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloud_siem {
namespace Model {
class ALIBABACLOUD_CLOUD_SIEM_EXPORT DescribeAlertsRequest : public RpcServiceRequest {
public:
	DescribeAlertsRequest();
	~DescribeAlertsRequest();
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getIsDefend() const;
	void setIsDefend(const std::string &isDefend);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getSubUserId() const;
	void setSubUserId(const std::string &subUserId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<std::string> getLevel() const;
	void setLevel(const std::vector<std::string> &level);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getAlertTitle() const;
	void setAlertTitle(const std::string &alertTitle);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getAlertUuid() const;
	void setAlertUuid(const std::string &alertUuid);

private:
	std::string source_;
	std::string isDefend_;
	long startTime_;
	std::string subUserId_;
	std::string regionId_;
	int pageSize_;
	std::vector<std::string> level_;
	long endTime_;
	std::string alertTitle_;
	int currentPage_;
	std::string alertUuid_;
};
} // namespace Model
} // namespace Cloud_siem
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEALERTSREQUEST_H_
