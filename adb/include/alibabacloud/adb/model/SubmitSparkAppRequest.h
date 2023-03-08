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

#ifndef ALIBABACLOUD_ADB_MODEL_SUBMITSPARKAPPREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_SUBMITSPARKAPPREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT SubmitSparkAppRequest : public RpcServiceRequest {
public:
	SubmitSparkAppRequest();
	~SubmitSparkAppRequest();
	std::string getResourceGroupName() const;
	void setResourceGroupName(const std::string &resourceGroupName);
	std::string getAgentVersion() const;
	void setAgentVersion(const std::string &agentVersion);
	std::string getData() const;
	void setData(const std::string &data);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	long getTemplateFileId() const;
	void setTemplateFileId(long templateFileId);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getAppType() const;
	void setAppType(const std::string &appType);
	std::string getAgentSource() const;
	void setAgentSource(const std::string &agentSource);

private:
	std::string resourceGroupName_;
	std::string agentVersion_;
	std::string data_;
	std::string appName_;
	long templateFileId_;
	std::string dBClusterId_;
	std::string appType_;
	std::string agentSource_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_SUBMITSPARKAPPREQUEST_H_
