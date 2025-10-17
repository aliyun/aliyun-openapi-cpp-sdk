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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBECROSSCLOUDLEVELSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBECROSSCLOUDLEVELSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeCrossCloudLevelsRequest : public RpcServiceRequest {
public:
	DescribeCrossCloudLevelsRequest();
	~DescribeCrossCloudLevelsRequest();
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getDBType() const;
	void setDBType(const std::string &dBType);
	std::string getDBVersion() const;
	void setDBVersion(const std::string &dBVersion);

private:
	std::string storageType_;
	std::string projectId_;
	std::string dBType_;
	std::string dBVersion_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBECROSSCLOUDLEVELSREQUEST_H_
