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

#ifndef ALIBABACLOUD_DBFS_MODEL_LISTSNAPSHOTREQUEST_H_
#define ALIBABACLOUD_DBFS_MODEL_LISTSNAPSHOTREQUEST_H_

#include <alibabacloud/dbfs/DBFSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace DBFS {
namespace Model {
class ALIBABACLOUD_DBFS_EXPORT ListSnapshotRequest : public RpcServiceRequest {
public:
	ListSnapshotRequest();
	~ListSnapshotRequest();
	std::string getSortType() const;
	void setSortType(const std::string &sortType);
	std::string getSnapshotIds() const;
	void setSnapshotIds(const std::string &snapshotIds);
	std::string getFilterValue() const;
	void setFilterValue(const std::string &filterValue);
	std::string getSnapshotName() const;
	void setSnapshotName(const std::string &snapshotName);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getFilterKey() const;
	void setFilterKey(const std::string &filterKey);
	std::string getSortKey() const;
	void setSortKey(const std::string &sortKey);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getFsId() const;
	void setFsId(const std::string &fsId);
	std::string getSnapshotType() const;
	void setSnapshotType(const std::string &snapshotType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string sortType_;
	std::string snapshotIds_;
	std::string filterValue_;
	std::string snapshotName_;
	int pageNumber_;
	std::string filterKey_;
	std::string sortKey_;
	std::string regionId_;
	int pageSize_;
	std::string fsId_;
	std::string snapshotType_;
	std::string status_;
};
} // namespace Model
} // namespace DBFS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DBFS_MODEL_LISTSNAPSHOTREQUEST_H_
