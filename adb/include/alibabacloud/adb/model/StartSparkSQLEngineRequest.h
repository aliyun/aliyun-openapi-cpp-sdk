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

#ifndef ALIBABACLOUD_ADB_MODEL_STARTSPARKSQLENGINEREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_STARTSPARKSQLENGINEREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT StartSparkSQLEngineRequest : public RpcServiceRequest {
public:
	StartSparkSQLEngineRequest();
	~StartSparkSQLEngineRequest();
	std::string getResourceGroupName() const;
	void setResourceGroupName(const std::string &resourceGroupName);
	long getSlotNum() const;
	void setSlotNum(long slotNum);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	long getMinExecutor() const;
	void setMinExecutor(long minExecutor);
	std::string getJars() const;
	void setJars(const std::string &jars);
	long getMaxExecutor() const;
	void setMaxExecutor(long maxExecutor);
	std::string getConfig() const;
	void setConfig(const std::string &config);

private:
	std::string resourceGroupName_;
	long slotNum_;
	std::string dBClusterId_;
	long minExecutor_;
	std::string jars_;
	long maxExecutor_;
	std::string config_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_STARTSPARKSQLENGINEREQUEST_H_
