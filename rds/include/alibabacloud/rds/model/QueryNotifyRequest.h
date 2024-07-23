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

#ifndef ALIBABACLOUD_RDS_MODEL_QUERYNOTIFYREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_QUERYNOTIFYREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT QueryNotifyRequest : public RpcServiceRequest {
public:
	QueryNotifyRequest();
	~QueryNotifyRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getWithConfirmed() const;
	void setWithConfirmed(bool withConfirmed);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::string getTo() const;
	void setTo(const std::string &to);

private:
	int pageNumber_;
	std::string regionId_;
	bool withConfirmed_;
	int pageSize_;
	std::string from_;
	std::string to_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_QUERYNOTIFYREQUEST_H_
