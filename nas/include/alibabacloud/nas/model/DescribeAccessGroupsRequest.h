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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBEACCESSGROUPSREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBEACCESSGROUPSREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT DescribeAccessGroupsRequest : public RpcServiceRequest {
public:
	DescribeAccessGroupsRequest();
	~DescribeAccessGroupsRequest();
	bool getUseUTCDateTime() const;
	void setUseUTCDateTime(bool useUTCDateTime);
	std::string getFileSystemType() const;
	void setFileSystemType(const std::string &fileSystemType);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getAccessGroupName() const;
	void setAccessGroupName(const std::string &accessGroupName);

private:
	bool useUTCDateTime_;
	std::string fileSystemType_;
	int pageNumber_;
	int pageSize_;
	std::string accessGroupName_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBEACCESSGROUPSREQUEST_H_
