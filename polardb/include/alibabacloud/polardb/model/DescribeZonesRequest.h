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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEZONESREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEZONESREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeZonesRequest : public RpcServiceRequest {
public:
	DescribeZonesRequest();
	~DescribeZonesRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getExtra() const;
	void setExtra(const std::string &extra);

private:
	std::string productCode_;
	long resourceOwnerId_;
	std::string engine_;
	std::string regionId_;
	std::string extra_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEZONESREQUEST_H_
