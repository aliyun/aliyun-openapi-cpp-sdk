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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDDOSALLEVENTLISTREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDDOSALLEVENTLISTREQUEST_H_

#include <alibabacloud/ddoscoo/DdoscooExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddoscoo {
namespace Model {
class ALIBABACLOUD_DDOSCOO_EXPORT DescribeDDosAllEventListRequest : public RpcServiceRequest {
public:
	DescribeDDosAllEventListRequest();
	~DescribeDDosAllEventListRequest();
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getEventType() const;
	void setEventType(const std::string &eventType);

private:
	long startTime_;
	int pageNumber_;
	std::string sourceIp_;
	int pageSize_;
	long endTime_;
	std::string eventType_;
};
} // namespace Model
} // namespace Ddoscoo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDDOSALLEVENTLISTREQUEST_H_
