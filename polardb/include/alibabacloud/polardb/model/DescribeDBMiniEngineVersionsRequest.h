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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBMINIENGINEVERSIONSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBMINIENGINEVERSIONSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeDBMiniEngineVersionsRequest : public RpcServiceRequest {
public:
	DescribeDBMiniEngineVersionsRequest();
	~DescribeDBMiniEngineVersionsRequest();
	std::string getCreationCategory() const;
	void setCreationCategory(const std::string &creationCategory);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getArchitecture() const;
	void setArchitecture(const std::string &architecture);
	std::string getDBMinorVersion() const;
	void setDBMinorVersion(const std::string &dBMinorVersion);
	std::string getDBType() const;
	void setDBType(const std::string &dBType);
	std::string getDBVersion() const;
	void setDBVersion(const std::string &dBVersion);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	std::string creationCategory_;
	std::string regionId_;
	std::string architecture_;
	std::string dBMinorVersion_;
	std::string dBType_;
	std::string dBVersion_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBMINIENGINEVERSIONSREQUEST_H_
