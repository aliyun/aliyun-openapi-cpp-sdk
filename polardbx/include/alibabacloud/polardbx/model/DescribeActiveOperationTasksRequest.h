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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEACTIVEOPERATIONTASKSREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEACTIVEOPERATIONTASKSREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT DescribeActiveOperationTasksRequest : public RpcServiceRequest {
public:
	DescribeActiveOperationTasksRequest();
	~DescribeActiveOperationTasksRequest();
	std::string getProductId() const;
	void setProductId(const std::string &productId);
	std::string getChangeLevel() const;
	void setChangeLevel(const std::string &changeLevel);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getInsName() const;
	void setInsName(const std::string &insName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	long getAllowCancel() const;
	void setAllowCancel(long allowCancel);
	std::string getDbType() const;
	void setDbType(const std::string &dbType);
	long getAllowChange() const;
	void setAllowChange(long allowChange);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	long getStatus() const;
	void setStatus(long status);

private:
	std::string productId_;
	std::string changeLevel_;
	long pageNumber_;
	std::string insName_;
	std::string regionId_;
	long pageSize_;
	std::string taskType_;
	long allowCancel_;
	std::string dbType_;
	long allowChange_;
	std::string region_;
	long status_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_DESCRIBEACTIVEOPERATIONTASKSREQUEST_H_
