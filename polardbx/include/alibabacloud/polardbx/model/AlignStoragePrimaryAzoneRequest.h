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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_ALIGNSTORAGEPRIMARYAZONEREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_ALIGNSTORAGEPRIMARYAZONEREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT AlignStoragePrimaryAzoneRequest : public RpcServiceRequest {
public:
	AlignStoragePrimaryAzoneRequest();
	~AlignStoragePrimaryAzoneRequest();
	std::string getDBInstanceName() const;
	void setDBInstanceName(const std::string &dBInstanceName);
	std::string getSwitchTimeMode() const;
	void setSwitchTimeMode(const std::string &switchTimeMode);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSwitchTime() const;
	void setSwitchTime(const std::string &switchTime);
	std::string getStorageInstanceName() const;
	void setStorageInstanceName(const std::string &storageInstanceName);

private:
	std::string dBInstanceName_;
	std::string switchTimeMode_;
	std::string regionId_;
	std::string switchTime_;
	std::string storageInstanceName_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_ALIGNSTORAGEPRIMARYAZONEREQUEST_H_
