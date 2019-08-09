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

#ifndef ALIBABACLOUD_CMS_MODEL_LISTNOTIFYPOLICYRESULT_H_
#define ALIBABACLOUD_CMS_MODEL_LISTNOTIFYPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT ListNotifyPolicyResult : public ServiceResult
			{
			public:
				struct NotifyPolicy
				{
					std::string type;
					std::string alertName;
					long endTime;
					long startTime;
					std::string dimensions;
					std::string id;
					std::string groupId;
				};


				ListNotifyPolicyResult();
				explicit ListNotifyPolicyResult(const std::string &payload);
				~ListNotifyPolicyResult();
				std::vector<NotifyPolicy> getNotifyPolicyList()const;
				std::string getMessage()const;
				int getTotal()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<NotifyPolicy> notifyPolicyList_;
				std::string message_;
				int total_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_LISTNOTIFYPOLICYRESULT_H_