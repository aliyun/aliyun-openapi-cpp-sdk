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

#ifndef ALIBABACLOUD_ADB_MODEL_MODIFYDBCLUSTERPAYTYPEREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_MODIFYDBCLUSTERPAYTYPEREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT ModifyDBClusterPayTypeRequest : public RpcServiceRequest {
public:
	ModifyDBClusterPayTypeRequest();
	~ModifyDBClusterPayTypeRequest();
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getDbClusterId() const;
	void setDbClusterId(const std::string &dbClusterId);
	std::string getUsedTime() const;
	void setUsedTime(const std::string &usedTime);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);

private:
	std::string period_;
	std::string dbClusterId_;
	std::string usedTime_;
	std::string accessKeyId_;
	std::string payType_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_MODIFYDBCLUSTERPAYTYPEREQUEST_H_
