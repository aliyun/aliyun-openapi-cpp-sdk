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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTONCALLSCHEDULESREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTONCALLSCHEDULESREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT ListOnCallSchedulesRequest : public RpcServiceRequest {
public:
	ListOnCallSchedulesRequest();
	~ListOnCallSchedulesRequest();
	long getSize() const;
	void setSize(long size);
	std::string getName() const;
	void setName(const std::string &name);
	long getPage() const;
	void setPage(long page);

private:
	long size_;
	std::string name_;
	long page_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTONCALLSCHEDULESREQUEST_H_
