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

#ifndef ALIBABACLOUD_DATALAKE_MODEL_LISTCATALOGSREQUEST_H_
#define ALIBABACLOUD_DATALAKE_MODEL_LISTCATALOGSREQUEST_H_

#include <alibabacloud/datalake/DataLakeExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace DataLake {
namespace Model {
class ALIBABACLOUD_DATALAKE_EXPORT ListCatalogsRequest : public RoaServiceRequest {
public:
	ListCatalogsRequest();
	~ListCatalogsRequest();
	std::string getNextPageToken() const;
	void setNextPageToken(const std::string &nextPageToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getIdPattern() const;
	void setIdPattern(const std::string &idPattern);

private:
	std::string nextPageToken_;
	int pageSize_;
	std::string idPattern_;
};
} // namespace Model
} // namespace DataLake
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATALAKE_MODEL_LISTCATALOGSREQUEST_H_
