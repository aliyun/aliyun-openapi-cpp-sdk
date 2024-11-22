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

#ifndef ALIBABACLOUD_QIANZHOU_MODEL_LISTUSERCLUSTERSREQUEST_H_
#define ALIBABACLOUD_QIANZHOU_MODEL_LISTUSERCLUSTERSREQUEST_H_

#include <alibabacloud/qianzhou/QianzhouExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Qianzhou {
namespace Model {
class ALIBABACLOUD_QIANZHOU_EXPORT ListUserClustersRequest : public RoaServiceRequest {
public:
	ListUserClustersRequest();
	~ListUserClustersRequest();
	std::string getCurrent() const;
	void setCurrent(const std::string &current);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getUserID() const;
	void setUserID(const std::string &userID);

private:
	std::string current_;
	std::string pageSize_;
	std::string userID_;
};
} // namespace Model
} // namespace Qianzhou
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QIANZHOU_MODEL_LISTUSERCLUSTERSREQUEST_H_
