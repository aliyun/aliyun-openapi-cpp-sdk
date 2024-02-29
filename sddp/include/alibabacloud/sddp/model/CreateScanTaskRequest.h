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

#ifndef ALIBABACLOUD_SDDP_MODEL_CREATESCANTASKREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_CREATESCANTASKREQUEST_H_

#include <alibabacloud/sddp/SddpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sddp {
namespace Model {
class ALIBABACLOUD_SDDP_EXPORT CreateScanTaskRequest : public RpcServiceRequest {
public:
	CreateScanTaskRequest();
	~CreateScanTaskRequest();
	int getRunHour() const;
	void setRunHour(int runHour);
	std::string getScanRangeContent() const;
	void setScanRangeContent(const std::string &scanRangeContent);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	long getDataLimitId() const;
	void setDataLimitId(long dataLimitId);
	int getRunMinute() const;
	void setRunMinute(int runMinute);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getIntervalDay() const;
	void setIntervalDay(int intervalDay);
	int getScanRange() const;
	void setScanRange(int scanRange);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getFeatureType() const;
	void setFeatureType(int featureType);
	std::string getOssScanPath() const;
	void setOssScanPath(const std::string &ossScanPath);
	long getResourceType() const;
	void setResourceType(long resourceType);
	std::string getTaskUserName() const;
	void setTaskUserName(const std::string &taskUserName);

private:
	int runHour_;
	std::string scanRangeContent_;
	std::string taskName_;
	long dataLimitId_;
	int runMinute_;
	std::string sourceIp_;
	int intervalDay_;
	int scanRange_;
	std::string lang_;
	int featureType_;
	std::string ossScanPath_;
	long resourceType_;
	std::string taskUserName_;
};
} // namespace Model
} // namespace Sddp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SDDP_MODEL_CREATESCANTASKREQUEST_H_
