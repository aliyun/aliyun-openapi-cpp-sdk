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

#ifndef ALIBABACLOUD_DCDN_MODEL_LISTDCDNREALTIMEDELIVERYPROJECTRESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_LISTDCDNREALTIMEDELIVERYPROJECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT ListDcdnRealTimeDeliveryProjectResult : public ServiceResult
			{
			public:
				struct Projects
				{
					std::string type;
					std::string dataCenter;
					std::string sLSProject;
					std::string projectName;
					std::string domainName;
					std::string sLSRegion;
					std::string businessType;
					std::string sLSLogStore;
					std::string fieldName;
					float samplingRate;
				};


				ListDcdnRealTimeDeliveryProjectResult();
				explicit ListDcdnRealTimeDeliveryProjectResult(const std::string &payload);
				~ListDcdnRealTimeDeliveryProjectResult();
				int getTotalCount()const;
				std::vector<Projects> getContent()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Projects> content_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_LISTDCDNREALTIMEDELIVERYPROJECTRESULT_H_