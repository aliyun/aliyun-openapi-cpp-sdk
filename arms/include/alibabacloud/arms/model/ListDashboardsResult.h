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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTDASHBOARDSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTDASHBOARDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT ListDashboardsResult : public ServiceResult
			{
			public:
				struct DashboardVosItem
				{
					struct I18nChild
					{
						std::string title;
						std::string time;
						std::string exporter;
						std::string url;
						std::string httpUrl;
						std::string name;
						std::string uid;
						std::string type;
						bool needUpdate;
						std::string language;
						std::string version;
						std::vector<std::string> tags1;
						std::string kind;
						std::string id;
						std::string dashboardType;
						std::string httpsUrl;
						bool isArmsExporter;
					};
					std::string title;
					std::string time;
					std::string exporter;
					I18nChild i18nChild;
					std::string url;
					std::string httpUrl;
					std::string name;
					std::string uid;
					std::string type;
					bool needUpdate;
					std::string language;
					std::string version;
					std::string kind;
					std::string id;
					std::string dashboardType;
					std::string httpsUrl;
					std::vector<std::string> tags;
					bool isArmsExporter;
				};


				ListDashboardsResult();
				explicit ListDashboardsResult(const std::string &payload);
				~ListDashboardsResult();
				std::vector<DashboardVosItem> getDashboardVos()const;
				std::string getEnvironmentId()const;
				std::string getPrometheusServiceOpened()const;
				std::string getGrafanaServiceOpened()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DashboardVosItem> dashboardVos_;
				std::string environmentId_;
				std::string prometheusServiceOpened_;
				std::string grafanaServiceOpened_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTDASHBOARDSRESULT_H_