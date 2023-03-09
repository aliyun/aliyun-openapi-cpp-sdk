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

#ifndef ALIBABACLOUD_ADB_MODEL_DISABLEADVICESERVICEREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_DISABLEADVICESERVICEREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT DisableAdviceServiceRequest : public RpcServiceRequest {
public:
	DisableAdviceServiceRequest();
	~DisableAdviceServiceRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);

private:
	std::string regionId_;
	std::string dBClusterId_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_DISABLEADVICESERVICEREQUEST_H_
