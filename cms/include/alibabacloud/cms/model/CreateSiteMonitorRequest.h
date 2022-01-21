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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATESITEMONITORREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATESITEMONITORREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT CreateSiteMonitorRequest : public RpcServiceRequest {
public:
	CreateSiteMonitorRequest();
	~CreateSiteMonitorRequest();
	std::string getReportProject() const;
	void setReportProject(const std::string &reportProject);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	std::string getAlertIds() const;
	void setAlertIds(const std::string &alertIds);
	std::string getAddress() const;
	void setAddress(const std::string &address);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getIspCities() const;
	void setIspCities(const std::string &ispCities);
	std::string getOptionsJson() const;
	void setOptionsJson(const std::string &optionsJson);
	std::string getIntervalUnit() const;
	void setIntervalUnit(const std::string &intervalUnit);
	std::string getInterval() const;
	void setInterval(const std::string &interval);

private:
	std::string reportProject_;
	std::string taskName_;
	std::string alertIds_;
	std::string address_;
	std::string taskType_;
	long endTime_;
	std::string ispCities_;
	std::string optionsJson_;
	std::string intervalUnit_;
	std::string interval_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_CREATESITEMONITORREQUEST_H_
