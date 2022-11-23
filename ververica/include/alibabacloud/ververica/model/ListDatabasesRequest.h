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

#ifndef ALIBABACLOUD_VERVERICA_MODEL_LISTDATABASESREQUEST_H_
#define ALIBABACLOUD_VERVERICA_MODEL_LISTDATABASESREQUEST_H_

#include <alibabacloud/ververica/VervericaExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ververica {
namespace Model {
class ALIBABACLOUD_VERVERICA_EXPORT ListDatabasesRequest : public RoaServiceRequest {
public:
	ListDatabasesRequest();
	~ListDatabasesRequest();
	std::string getWorkspace() const;
	void setWorkspace(const std::string &workspace);
	std::string getCat() const;
	void setCat(const std::string &cat);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);

private:
	std::string workspace_;
	std::string cat_;
	std::string _namespace_;
};
} // namespace Model
} // namespace Ververica
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VERVERICA_MODEL_LISTDATABASESREQUEST_H_
