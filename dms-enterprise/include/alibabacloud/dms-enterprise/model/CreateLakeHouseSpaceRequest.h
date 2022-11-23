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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATELAKEHOUSESPACEREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATELAKEHOUSESPACEREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT CreateLakeHouseSpaceRequest : public RpcServiceRequest {
public:
	CreateLakeHouseSpaceRequest();
	~CreateLakeHouseSpaceRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	long getTid() const;
	void setTid(long tid);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getProdDbId() const;
	void setProdDbId(const std::string &prodDbId);
	std::string getDevDbId() const;
	void setDevDbId(const std::string &devDbId);
	std::string getSpaceName() const;
	void setSpaceName(const std::string &spaceName);
	std::string getDwDbType() const;
	void setDwDbType(const std::string &dwDbType);
	std::string getSpaceConfig() const;
	void setSpaceConfig(const std::string &spaceConfig);

private:
	std::string description_;
	long tid_;
	std::string mode_;
	std::string prodDbId_;
	std::string devDbId_;
	std::string spaceName_;
	std::string dwDbType_;
	std::string spaceConfig_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATELAKEHOUSESPACEREQUEST_H_
