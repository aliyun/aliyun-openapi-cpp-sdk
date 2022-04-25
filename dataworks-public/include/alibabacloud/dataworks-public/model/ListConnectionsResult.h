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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTCONNECTIONSRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTCONNECTIONSRESULT_H_

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
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListConnectionsResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ConnectionsItem
					{
						int status;
						int connectStatus;
						std::string subType;
						std::string description;
						std::string connectionType;
						int bindingCalcEngineId;
						int projectId;
						std::string gmtModified;
						std::string _operator;
						int sequence;
						bool shared;
						int envType;
						bool defaultEngine;
						std::string name;
						std::string gmtCreate;
						long tenantId;
						std::string content;
						int id;
					};
					std::vector<ConnectionsItem> connections;
					int totalCount;
					int pageSize;
					int pageNumber;
				};


				ListConnectionsResult();
				explicit ListConnectionsResult(const std::string &payload);
				~ListConnectionsResult();
				int getHttpStatusCode()const;
				Data getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				Data data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTCONNECTIONSRESULT_H_