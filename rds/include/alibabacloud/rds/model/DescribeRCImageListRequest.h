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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCIMAGELISTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCIMAGELISTREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRCImageListRequest : public RpcServiceRequest {
public:
	DescribeRCImageListRequest();
	~DescribeRCImageListRequest();
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getType() const;
	void setType(const std::string &type);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getImageName() const;
	void setImageName(const std::string &imageName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getArchitecture() const;
	void setArchitecture(const std::string &architecture);

private:
	std::string imageId_;
	std::string type_;
	int pageNumber_;
	std::string regionId_;
	std::string imageName_;
	int pageSize_;
	std::string instanceType_;
	std::string architecture_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCIMAGELISTREQUEST_H_
