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

#ifndef ALIBABACLOUD_ADB_MODEL_DOWNLOADDIAGNOSISRECORDSREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_DOWNLOADDIAGNOSISRECORDSREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT DownloadDiagnosisRecordsRequest : public RpcServiceRequest {
public:
	DownloadDiagnosisRecordsRequest();
	~DownloadDiagnosisRecordsRequest();
	std::string getQueryCondition() const;
	void setQueryCondition(const std::string &queryCondition);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getRawStartTime() const;
	void setRawStartTime(const std::string &rawStartTime);
	std::string getRawEndTime() const;
	void setRawEndTime(const std::string &rawEndTime);
	std::string getDatabase() const;
	void setDatabase(const std::string &database);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getClientIp() const;
	void setClientIp(const std::string &clientIp);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getLang() const;
	void setLang(const std::string &lang);
	long getMaxScanSize() const;
	void setMaxScanSize(long maxScanSize);
	std::string getResourceGroup() const;
	void setResourceGroup(const std::string &resourceGroup);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getMinPeakMemory() const;
	void setMinPeakMemory(long minPeakMemory);
	long getMinScanSize() const;
	void setMinScanSize(long minScanSize);
	long getMaxPeakMemory() const;
	void setMaxPeakMemory(long maxPeakMemory);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string queryCondition_;
	std::string startTime_;
	std::string rawStartTime_;
	std::string rawEndTime_;
	std::string database_;
	std::string regionId_;
	std::string clientIp_;
	std::string keyword_;
	std::string lang_;
	long maxScanSize_;
	std::string resourceGroup_;
	std::string dBClusterId_;
	std::string endTime_;
	long minPeakMemory_;
	long minScanSize_;
	long maxPeakMemory_;
	std::string userName_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_DOWNLOADDIAGNOSISRECORDSREQUEST_H_
