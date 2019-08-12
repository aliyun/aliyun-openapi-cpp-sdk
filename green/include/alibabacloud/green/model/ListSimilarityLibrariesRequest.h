<<<<<<< HEAD
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

#ifndef ALIBABACLOUD_GREEN_MODEL_LISTSIMILARITYLIBRARIESREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_LISTSIMILARITYLIBRARIESREQUEST_H_

#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>
#include <string>
#include <vector>

namespace AlibabaCloud {
namespace Green {
namespace Model {
class ALIBABACLOUD_GREEN_EXPORT ListSimilarityLibrariesRequest
    : public RoaServiceRequest {

public:
  ListSimilarityLibrariesRequest();
  ~ListSimilarityLibrariesRequest();

  std::string getClientInfo() const;
  void setClientInfo(const std::string &clientInfo);

private:
  std::string clientInfo_;
};
} // namespace Model
} // namespace Green
} // namespace AlibabaCloud
=======
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

#ifndef ALIBABACLOUD_GREEN_MODEL_LISTSIMILARITYLIBRARIESREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_LISTSIMILARITYLIBRARIESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT ListSimilarityLibrariesRequest : public RoaServiceRequest
			{

			public:
				ListSimilarityLibrariesRequest();
				~ListSimilarityLibrariesRequest();

				std::string getClientInfo()const;
				void setClientInfo(const std::string& clientInfo);

            private:
				std::string clientInfo_;

			};
		}
	}
}
>>>>>>> master
#endif // !ALIBABACLOUD_GREEN_MODEL_LISTSIMILARITYLIBRARIESREQUEST_H_