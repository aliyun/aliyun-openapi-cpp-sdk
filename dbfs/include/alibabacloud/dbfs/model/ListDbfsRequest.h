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

#ifndef ALIBABACLOUD_DBFS_MODEL_LISTDBFSREQUEST_H_
#define ALIBABACLOUD_DBFS_MODEL_LISTDBFSREQUEST_H_

#include <alibabacloud/dbfs/DBFSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace DBFS {
namespace Model {
class ALIBABACLOUD_DBFS_EXPORT ListDbfsRequest : public RpcServiceRequest {
public:
	ListDbfsRequest();
	~ListDbfsRequest();
	std::string getSortType() const;
	void setSortType(const std::string &sortType);
	std::string getFilterValue() const;
	void setFilterValue(const std::string &filterValue);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getFilterKey() const;
	void setFilterKey(const std::string &filterKey);
	std::string getSortKey() const;
	void setSortKey(const std::string &sortKey);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string sortType_;
	std::string filterValue_;
	int pageNumber_;
	std::string tags_;
	std::string filterKey_;
	std::string sortKey_;
	std::string regionId_;
	int pageSize_;
};
} // namespace Model
} // namespace DBFS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBFS_MODEL_LISTDBFSREQUEST_H_
