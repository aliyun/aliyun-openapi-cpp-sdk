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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBECLOUDASSISTANTATTRIBUTESREQUEST_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBECLOUDASSISTANTATTRIBUTESREQUEST_H_

#include <alibabacloud/swas-open/SWAS_OPENExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SWAS_OPEN {
namespace Model {
class ALIBABACLOUD_SWAS_OPEN_EXPORT DescribeCloudAssistantAttributesRequest : public RpcServiceRequest {
public:
	DescribeCloudAssistantAttributesRequest();
	~DescribeCloudAssistantAttributesRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	int pageNumber_;
	std::string regionId_;
	std::vector<std::string> instanceIds_;
	int pageSize_;
};
} // namespace Model
} // namespace SWAS_OPEN
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBECLOUDASSISTANTATTRIBUTESREQUEST_H_
