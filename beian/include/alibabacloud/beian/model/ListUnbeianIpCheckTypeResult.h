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

#ifndef ALIBABACLOUD_BEIAN_MODEL_LISTUNBEIANIPCHECKTYPERESULT_H_
#define ALIBABACLOUD_BEIAN_MODEL_LISTUNBEIANIPCHECKTYPERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/beian/BeianExport.h>

namespace AlibabaCloud
{
	namespace Beian
	{
		namespace Model
		{
			class ALIBABACLOUD_BEIAN_EXPORT ListUnbeianIpCheckTypeResult : public ServiceResult
			{
			public:
				struct HuntressIpCheckTypeResultDO
				{
					struct ListItem
					{
						std::string caller;
						int checkType;
						std::string ip;
						long aliuid;
						std::string remark;
					};
					std::string msg;
					std::vector<ListItem> list;
					bool success;
				};


				ListUnbeianIpCheckTypeResult();
				explicit ListUnbeianIpCheckTypeResult(const std::string &payload);
				~ListUnbeianIpCheckTypeResult();
				HuntressIpCheckTypeResultDO getHuntressIpCheckTypeResultDO()const;
				int getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				HuntressIpCheckTypeResultDO huntressIpCheckTypeResultDO_;
				int errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BEIAN_MODEL_LISTUNBEIANIPCHECKTYPERESULT_H_