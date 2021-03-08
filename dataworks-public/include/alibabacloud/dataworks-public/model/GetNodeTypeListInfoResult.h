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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETNODETYPELISTINFORESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETNODETYPELISTINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetNodeTypeListInfoResult : public ServiceResult
			{
			public:
				struct NodeTypeInfoList
				{
					struct NodeTypeInfoItem
					{
						std::string nodeTypeName;
						int nodeType;
					};
					int totalCount;
					int pageSize;
					std::vector<NodeTypeInfoItem> nodeTypeInfo;
					int pageNumber;
				};


				GetNodeTypeListInfoResult();
				explicit GetNodeTypeListInfoResult(const std::string &payload);
				~GetNodeTypeListInfoResult();
				NodeTypeInfoList getNodeTypeInfoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				NodeTypeInfoList nodeTypeInfoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETNODETYPELISTINFORESULT_H_