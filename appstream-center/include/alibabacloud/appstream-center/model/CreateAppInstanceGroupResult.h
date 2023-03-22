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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_MODEL_CREATEAPPINSTANCEGROUPRESULT_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_MODEL_CREATEAPPINSTANCEGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/appstream-center/Appstream_centerExport.h>

namespace AlibabaCloud
{
	namespace Appstream_center
	{
		namespace Model
		{
			class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT CreateAppInstanceGroupResult : public ServiceResult
			{
			public:
				struct AppInstanceGroupModel
				{
					std::string nodePoolId;
					std::string appInstanceGroupId;
					std::string orderId;
					std::string specId;
				};


				CreateAppInstanceGroupResult();
				explicit CreateAppInstanceGroupResult(const std::string &payload);
				~CreateAppInstanceGroupResult();
				AppInstanceGroupModel getAppInstanceGroupModel()const;

			protected:
				void parse(const std::string &payload);
			private:
				AppInstanceGroupModel appInstanceGroupModel_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_APPSTREAM_CENTER_MODEL_CREATEAPPINSTANCEGROUPRESULT_H_