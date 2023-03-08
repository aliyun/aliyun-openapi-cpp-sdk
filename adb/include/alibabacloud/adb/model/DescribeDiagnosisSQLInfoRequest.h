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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISSQLINFOREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISSQLINFOREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT DescribeDiagnosisSQLInfoRequest : public RpcServiceRequest {
public:
	DescribeDiagnosisSQLInfoRequest();
	~DescribeDiagnosisSQLInfoRequest();
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getProcessState() const;
	void setProcessState(const std::string &processState);
	long getProcessStartTime() const;
	void setProcessStartTime(long processStartTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getProcessId() const;
	void setProcessId(const std::string &processId);
	std::string getProcessRcHost() const;
	void setProcessRcHost(const std::string &processRcHost);
	std::string getLang() const;
	void setLang(const std::string &lang);

private:
	std::string dBClusterId_;
	std::string processState_;
	long processStartTime_;
	std::string regionId_;
	std::string processId_;
	std::string processRcHost_;
	std::string lang_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISSQLINFOREQUEST_H_
