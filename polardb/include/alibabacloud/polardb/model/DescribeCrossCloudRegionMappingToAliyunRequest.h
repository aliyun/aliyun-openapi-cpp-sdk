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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBECROSSCLOUDREGIONMAPPINGTOALIYUNREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBECROSSCLOUDREGIONMAPPINGTOALIYUNREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeCrossCloudRegionMappingToAliyunRequest : public RpcServiceRequest {
public:
	DescribeCrossCloudRegionMappingToAliyunRequest();
	~DescribeCrossCloudRegionMappingToAliyunRequest();
	std::string getCloudProvider() const;
	void setCloudProvider(const std::string &cloudProvider);
	std::string getAliyunRegionId() const;
	void setAliyunRegionId(const std::string &aliyunRegionId);
	std::string getCrossCloudRegionId() const;
	void setCrossCloudRegionId(const std::string &crossCloudRegionId);

private:
	std::string cloudProvider_;
	std::string aliyunRegionId_;
	std::string crossCloudRegionId_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBECROSSCLOUDREGIONMAPPINGTOALIYUNREQUEST_H_
