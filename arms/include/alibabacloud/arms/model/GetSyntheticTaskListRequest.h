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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETSYNTHETICTASKLISTREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_GETSYNTHETICTASKLISTREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT GetSyntheticTaskListRequest : public RpcServiceRequest {
public:
	GetSyntheticTaskListRequest();
	~GetSyntheticTaskListRequest();
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	long getPageNum() const;
	void setPageNum(long pageNum);
	std::string getUrl() const;
	void setUrl(const std::string &url);
	std::string getTaskStatus() const;
	void setTaskStatus(const std::string &taskStatus);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getDirection() const;
	void setDirection(const std::string &direction);

private:
	std::string taskType_;
	std::string taskName_;
	long pageNum_;
	std::string url_;
	std::string taskStatus_;
	std::string regionId_;
	long pageSize_;
	std::string order_;
	std::string direction_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_GETSYNTHETICTASKLISTREQUEST_H_
