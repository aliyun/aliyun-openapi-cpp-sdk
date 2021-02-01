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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_LISTBODYPERSONREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_LISTBODYPERSONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/facebody/FacebodyExport.h>

namespace AlibabaCloud
{
	namespace Facebody
	{
		namespace Model
		{
			class ALIBABACLOUD_FACEBODY_EXPORT ListBodyPersonRequest : public RpcServiceRequest
			{

			public:
				ListBodyPersonRequest();
				~ListBodyPersonRequest();

				long getLimit()const;
				void setLimit(long limit);
				long getOffset()const;
				void setOffset(long offset);
				long getDbId()const;
				void setDbId(long dbId);

            private:
				long limit_;
				long offset_;
				long dbId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FACEBODY_MODEL_LISTBODYPERSONREQUEST_H_