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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEVIEWREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEVIEWREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateViewRequest : public RpcServiceRequest
			{
			public:
				struct ViewColumn
				{
					std::string comment;
					std::string columnName;
				};

			public:
				CreateViewRequest();
				~CreateViewRequest();

				std::string getViewName()const;
				void setViewName(const std::string& viewName);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getSelectSQL()const;
				void setSelectSQL(const std::string& selectSQL);
				std::string getSelectWhere()const;
				void setSelectWhere(const std::string& selectWhere);
				std::string getSelectTableName()const;
				void setSelectTableName(const std::string& selectTableName);
				std::string getComment()const;
				void setComment(const std::string& comment);
				std::string getSelectColumn()const;
				void setSelectColumn(const std::string& selectColumn);
				std::string getAppGuid()const;
				void setAppGuid(const std::string& appGuid);
				std::vector<ViewColumn> getViewColumn()const;
				void setViewColumn(const std::vector<ViewColumn>& viewColumn);

            private:
				std::string viewName_;
				std::string clientToken_;
				std::string selectSQL_;
				std::string selectWhere_;
				std::string selectTableName_;
				std::string comment_;
				std::string selectColumn_;
				std::string appGuid_;
				std::vector<ViewColumn> viewColumn_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEVIEWREQUEST_H_